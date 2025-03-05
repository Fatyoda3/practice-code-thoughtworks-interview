// monday - 3 


let dayList = ['m', 't', 'w', 'th', 'fr', 'sa', 'su'];

function GetDay(dayName, Day) {

    let i = dayList.indexOf(dayName);

    if (Day > 7 || Day < -7) { Day %= 7 }

    if (Day >= 1) {


        if (i == 0 || i) {
            //truth falsy value kicked in 
            return dayList[i + Day - 1];

        }
    }
    else {

        return dayList[7 + i + Day];

    }

}


console.log(GetDay('w', -4));