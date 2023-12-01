function pascal (number) {
  let ans = new Array(number);

  for (let x = 0; x < number; x++) {
    ans[x] = new Array(x + 1);
  };                                                                                                                                                                                                                   

  for (let i = 0; i < number; i++) {
    ans[i][0] = 1;
    ans[i][i] = 1;

    for (let j = 1; j < i; j++) {
      ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
    };
  };

  return ans;
};

console.log(pascal(20));