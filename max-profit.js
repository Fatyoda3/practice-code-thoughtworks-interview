var maxProfit = function (prices) {
    // let smallest = prices[0];
    /*  let day;
     for (let i = 0; i < prices.length; i++) {
         if (smallest >= prices[i]) {
             smallest = prices[i];
             day = i;
         }
     }
     
     let biggest = 0;
 
     for (let i = day+1; i < prices.length; i++) {
         if (biggest <= prices[i]) {
             biggest = prices[i];
         }
     } */

    for (let i = 0; i < prices.length; i++) {
        for (let j = i; j < prices.length; j++) {

            if (prices[i] > prices[j]) {
                let temp = prices[i];
                prices[i] = prices[j];
                prices[j] = temp;
            }


        }
    }

    console.log(prices);


    if (prices[prices.length - 1] - prices[0] > 0) {
        return prices[prices.length - 1] - prices[0];
    }
    else
        return 0;


    /*  if (biggest - smallest > 0) {
         return biggest - smallest;
     }
     else
         return 0; */

};
console.log(
    maxProfit([1, 2]),
    maxProfit([7, 6, 4, 3, 1]))