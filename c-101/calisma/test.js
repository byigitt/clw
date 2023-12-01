const array = [4, 9, 7, 6, 5, 10, 11, 12, 13, 14, 15, 16, 17, 18, 20, 19, 22, 21, 23, 24];
let new_array = [], latest_smallest = 0, latest_oneup = 0, temp = 0;

for (let i = 0; i < array.length; i++) {
  for (let k = 0; k < array.length - 1; k++) {
    if (array[k] > array[k+1]) {
      let temp = array[k];
      array[k] = array[k+1];
      array[k+1] = temp;
    };
  };
};