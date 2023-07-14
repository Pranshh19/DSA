const express = require('express')
const app = express();
const port = 3000;

let count = 1;

app.get('/', (req, res) => {
    res.send(toString(count));
})


app.get('/increment', (req, res) => {
    count++;
    res.send(toString(count));
})

app.get('/decrement', (req, res) => {
    count--;
    res.send(toString(count));
})


app.listen(port, (req, res) => {
    console.log(`Listening on Port ${port}`);
})