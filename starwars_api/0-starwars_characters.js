#!/usr/bin/node
/* eslint-disable no-tabs, indent */
const request = require('request');

const url = `https://swapi-api.hbtn.io/api/films/${process.argv[2]}`;

request(url, (error, response, body) => {
	if (error) {
		console.error(error);
	}

	const character = JSON.parse(body).characters;
	const characterNames = character.map(
		urlname => new Promise((resolve, reject) => {
			request(urlname, (error, response, body) => {
				if (error) {
					reject(error);
				} else {
					resolve(JSON.parse(body).name);
				}
			});
		}));

	Promise.all(characterNames).then(names => console.log(names.join('\n'))
	).catch(error => console.error(error)
	);
	/* eslint-enable no-tabs, indent */
});
