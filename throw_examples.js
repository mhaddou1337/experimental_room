function usr_mail_checker(username,email)
{
    if(!username)
        throw new Error("enter a username");
    if(!email.includes('@') || !email)
        throw new Error("Enter a valid Email");
    console.log("accounts have been created");
}


usr_mail_checker("s", "s@s.com");
