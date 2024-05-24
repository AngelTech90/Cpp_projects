/* 

*Cofla problems:

*3 guys of 23 years old and they want to buy an icecream, and they want to buy the more expensive icecream as they can.

*Every single guy have differents amounts of money

*We will ask for put the money amount that every single guy have.

*We will show the more expensive icecream that the can have

*If we have 2 or more with the same price we'll show the both 

*We have to know what's the rest of money after he buy his icecream


*With the money of cofla one homeless buy a lotery ticket.
*If the money is suficent to buy 2 tickets buy 2.
*If the money is suficent to buy 3 tickets buy 2 and gift the rest.

*Show in screen the tickets and the rest.


*We have a lies detector that returns 1 in case that the user is lying, 2 if not and 3 that user don't chose nothing.

*Because somebody died before, cops are interrogating cofla using the lies detector:

*If user lies he recieve a electric shot
*If user don't lies he still chill.
*If user response isn't clear ask again for a more clear respond.


*/


const $ = selector => document.getElementById(selector);
const p = selectora => document.querySelectorAll(selectora);

let listOfPrices = [];

let listOfUsersNames = [];

let listOfBuyButtons = [];

let amountOfUsers = 0;

let i;

let invalidAmountOfWords = false;

let elementHtml = 0;

let listOfUsersMoney = [];

let iceCreamsList = {

    waterIceCream:['water icecream',0.6],

    creamIceCream:['cream icecream',1],

    icecreamBombonA:['icecream bombon A',1.6],
    icecreamBombonB:['icecream bombon B',1.7],
    icecreamBombonC:['icecream bombon C',1.8],

    icecreamBowlWithTopings:['Icecream bowl with topings',2.9],
    icecreamBowl:['Icecream bowl' ,2.9],

    
};

//*Here we have all our prices Know
listOfPrices.push(
    
    iceCreamsList.waterIceCream, 
    iceCreamsList.icecreamBowlWithTopings, 
    iceCreamsList.icecreamBombonA,
    iceCreamsList.icecreamBombonB,
    iceCreamsList.icecreamBombonC,
    iceCreamsList.creamIceCream,
    iceCreamsList.icecreamBowl

);


//*With this function we clean our first prompt
function cleanFirstAskOfInfo(){

    $('titleUserAmount').remove();
    $('amountOfUsersInput').remove();
    $('amountOfUsersInfo').remove();

}

//*With this function we render our names inputs:
function renderElementsOfFirstPrompt(){

    //*We check if our user select a valid amount of users
    if(amountOfUsers > 0){

        i = 0;//*We reset our iterator for use it later.

        //*Here we show in screen our prompt tittle:
        $('first_prompt').innerHTML += '<p class = "title">Hi! Could give your names?:</p>';


        //*Here we render text inputs taking in count our amount of users:
        while(i != amountOfUsers){

            i++;

            $('first_prompt').innerHTML += `<input id = "nameInput${i}" placeholder = "#${i} name" type = "text" class = "inputInfo" min = "1">`;
    
        } 


        //*Once we finish to render our inputs we render our input for submit our names:
        if( i == amountOfUsers ){

            $('first_prompt').innerHTML += `<button id = "buttonSubmitNames" value = "submit" class = "inputButton">Submit</button>`

        }
        
    } 

}

//*With this function we render our first input
function askNamesToUser(){

    //*We ask to user how many people will buy an icecream:
    $('first_prompt').innerHTML += '<p class = "title" id= "titleUserAmount" >How many people want an icecream?</p>';

    //*We render the number input for select the number of clients:
    $('first_prompt').innerHTML += '<input placeholder = "Number of clients" id = "amountOfUsersInput" type = "number" class = "inputInfo">';

    //*We render our submit button
    $('first_prompt').innerHTML += `<button value = "submit" class = "inputButton" id = "amountOfUsersInfo">Submit</button>`

    

        $('amountOfUsersInfo').onclick = () => {

            amountOfUsers = $('amountOfUsersInput').value;//*We set our amount of users

            console.log(amountOfUsers);//*We show our amount of users.

            if(amountOfUsers > 0){

                cleanFirstAskOfInfo();//*We clean the elements of our first ask.

                renderElementsOfFirstPrompt();//*We render our new elements like our name inputs and others

                i = 0;//*We restart our iterator for later.

                //*This button is for create and abstract our names of inputs and render our first table with that info:
                $('buttonSubmitNames').onclick = () => {


                    //*For abstract our names of our inputs we'll asign a unic numery indentiffier for all our inputs and use it to push it into an array that we'll use before:
                    while(i != amountOfUsers){

                        i++;

                        listOfUsersNames.push($(`nameInput${i}`).value);
                        
                    }

                    console.log(listOfUsersNames);//*We show the new array

                    renderFirstTable();//*We render our list of icecreams prices.

                }

        }   else{

            alert("Your amount of users have to be higher than 0")
    
        }

        }   
    
}

//*With this we clean the prompt for our first input:
function cleanPromptBox1(){

    $('first_prompt').innerHTML += ' ';

}

//*With this we hide our lies detector prompt:
function hideSecondTable(){

    //*We select our HTML element and we hide it:
    $('lies_detector').style.display = 'none';

}

//*With this function we render our icecreams prices:
function renderFirstTable(){

    $('first_prompt').innerHTML = ' ';//*We clean our screen.

    $('first_prompt').innerHTML += '<p class = "title">PRICES OF ICECREAM:</p>';//*We create the tittle of our prices

    //*Here we render all our prices:
    listOfPrices.forEach((productInfo) => {

        $('first_prompt').innerHTML += `
        
        <p class = "productName">${productInfo[0]}: <span class = "spanPrice">${productInfo[1]}<span class ="priceSymbol">$</span></p>

        `;

    });

    //*Here we put our button to continue to but icecream:
    $('first_prompt').innerHTML += `<button id = "goForIcecreamButton" class = "inputButton"> GO FOR ICECREAM </button>`;


    //*When we click our button we render the inputs for put the money for buy the icecream:
    $('goForIcecreamButton').onclick = () => {

        renderInputsOfBuyIcecream();

    }
}


function defExpensiveIcecream(){

    //*Here we check if we finish to render our inputs for buy icecream:
    if(i == amountOfUsers){

        invalidAmountOfWords = false;

    //*with this loop we split our arrays for separate numbers to strings:
        for (let index = 0; index < listOfUsersMoney.length; index++) {

            listOfUsersMoney[index] = listOfUsersMoney[index].split(' ');
            
        }

    }

    i = 0;//*We reset our iterator:

    //*This loop is for check if once of the elements inside our users money list have invalid chars
    for (let index = 0; index < listOfUsersMoney.length; index++) {

        //*If the user input have more than the amount of money and the currency isn't a valid input:
        if(listOfUsersMoney[index].length > 2){

            invalidAmountOfWords = true;

            while(i != amountOfUsers){

                i++;//*We increase our iterator.
        
                $(`userMoney${i}`).value = ' ';//*We clean the content of our text inputs.
        
            }
        
        }
        
    }


    //*We check if the user is making an invalid input:
    if(invalidAmountOfWords == true){

        alert("Please enter only your amount of money and currency");//*Here we show to user that he put not valid info

        listOfUsersMoney = [];

    }


}


//*With this we render our prompt for let the users buy icecream:
function renderInputsOfBuyIcecream(){

    i = 0;//*We reset our iterator.

    $('first_prompt').innerHTML = ' ';//*We clean our prompt screen.

    //*This is for render in our prompt the inputs:
    listOfUsersNames.forEach((nameUser) => {

        i++;

        //*Here we ask to every single user money for icecream:
        $('first_prompt').innerHTML += `<p class = "subTitle">Give me your money for icecream <span class = "userNameToBuy">${nameUser}</span></p>`;

        //*Here we render the money type text for money:
        $('first_prompt').innerHTML += `<input id = "userMoney${i}" class = "moneyInput" placeholder = "Your money in USD">`;

    });

    //*We render the button for buy:
        $('first_prompt').innerHTML += `<button id = "buyButton" >Buy icecreams</button>`;

    //*This is for a dinamic adaptation in our CSS:
    if(amountOfUsers >= 5){

        document.querySelector('.motherBox').style.height = 'fit-content';

        $('first_prompt').style.height = 'fit-content';

    }


    i = 0;//*We reset our operator.


    $("buyButton").onclick = () => {

        //*For abstract our names of our inputs we'll asign a unic numery indentiffier for all our inputs and use it to push it into an array that we'll use before:
        if(invalidAmountOfWords == false){

            while(i != amountOfUsers){

                i++;

                listOfUsersMoney.push($(`userMoney${i}`).value);

                
            }
        }

        defExpensiveIcecream();//*Here we'll define the more expensive icecream for every icecream.

    }

    console.log(listOfUsersMoney);

}

//*We control our dom functions once our window load:
window.onload = () => {

    askNamesToUser();
    hideSecondTable();//*We hide our first table.

}