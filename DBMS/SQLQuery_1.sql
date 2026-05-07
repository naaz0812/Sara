CREATE DATABASE myschool;

USE myschool;

CREATE TABLE myrecords1 (
    id INT , name VARCHAR (100),  age INT , address VARCHAR (150), PH INT, 
    email VARCHAR (200)

);

INSERT INTO myrecords1 (id, name, age , address, PH, email)
VALUES (101, 'anchal', 16, 'ranchi', 96765321, 'A@GMAIL.COM');

SELECT * FROM myrecords1;