{
    // bestFood’s TDZ starts here (at the beginning of this block’s local scope)
    // bestFood’s TDZ continues here
    // bestFood’s TDZ continues here
    // bestFood’s TDZ continues here
    console.log(bestFood); // returns ReferenceError because bestFood’s TDZ continues here
    // bestFood’s TDZ continues here
    // bestFood’s TDZ continues here
    let bestFood = "Vegetable Fried Rice"; // bestFood’s TDZ ends here
    // bestFood’s TDZ does not exist here
    // bestFood’s TDZ does not exist here
    // bestFood’s TDZ does not exist here
  }