const express = require("express");
const app = express();
const fetch = require('node-fetch');


const PORT = 8080;

// fetch('https://google.com')
// .then(res => res.text())
// .then(text => console.log(text));

app.get('/', (req, res) => {
    res.send("HEY");
})


app.get('/men', (req, res) => {
    res.send(
        fetch('https://fakestoreapi.com/products?limit=10')
        .then(res=>res.json())
        .then(json=>console.log(json))
    );
})


app.get('/women', (req, res) => {
    res.send(
        fetch('https://fakestoreapi.com/products?limit=10')
        .then(res=>res.json())
        .then(json=>console.log(json))
    );
})


app.get('/other', (req, res) => {
    res.send("Page not found");
})

app.listen(PORT, (req, res) => {
    console.log(`Listening on ${PORT}`);
})