<?php
if($_SERVER["REQUEST_METHOD"]=="POST") 
{
    $name= $_POST['name'];
   
    $email= $_POST['email'];
    $message= $_POST['message'];
    
    echo "name:" .htmlspecialchars($name) . "<br>";
    echo "email:" .htmlspecialchars($email) . "<br>";
    echo "message:" .htmlspecialchars($message) . "<br>";
}
?>
    