function CodelandUsernameValidation(str) { 

  // code goes here  
  if(str.length < 4 || str.length > 25 || str.match(/([A-Z])\w+/g) || str[str.length - 1] == '_' || str[0] == '_'|| str[0].match("^[0-9]*$"))
    return false

  return true; 

}
   
// keep this function call here 
console.log(CodelandUsernameValidation(readline()));