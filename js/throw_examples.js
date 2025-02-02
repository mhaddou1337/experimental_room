function usr_mail_checker(username,email)
{
    if(!username)
        throw new Error("enter a username");
    if(!email.includes('@') || !email)
        throw new Error("Enter a valid Email");
    console.log("accounts have been created");
}
usr_mail_checker("s", "s@s.com");

const n_checker = function(x , y)
    {
        if(x !==y)
            return true;
        if (x === y)
            throw new Error("x et y sont pas egales");
    }
fvvv(5,5);

sum_checker(12,8,20);
function sum_checker(x,y,total)
{
    if(x+y === total)
    return(true);
    else if (x+y !== total)
        throw new Error(`cest pas la meme valuer, abs cest ${Math.abs(total-(x+y))}`)
}

