const express = require("express")
const app = express();

const port = 3000;

 
app.get('/', (req, res) => {
const rand = Math.floor(Math.random() * 10);
    res.send("random number: " + rand);
})


app.listen(port, (req, res) => {
    console.log(`Listening on ${port}`);
})