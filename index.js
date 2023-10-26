const jsonfile = require('jsonfile');
const moment = require('moment');
const simpleGit = require('simple-git');

const FILE_PATH = './data.json';
const MONTH = 1; // October

const makeCommit = async (n) => {
  if (n === 0) return simpleGit().push();

  const { default: random } = await import('random');

  const x = random.int(0, 54);
  const y = random.int(0, 6);
  let currentDate = moment()
    .subtract(1, 'y')
    .add(1, 'd')
    .add(x, 'w')
    .add(y, 'd')
    .startOf('day'); // Set the date to the beginning of the day

  while (currentDate.month() + 1 !== MONTH) {
    currentDate.add(1, 'day').startOf('day'); // Update the date to the next day
  }

  const DATE = currentDate.format(); // Convert the date to a string when needed

  const data = {
    date: DATE,
  };

  console.log(DATE);

  jsonfile.writeFile(FILE_PATH, data, () => {
    simpleGit()
      .add([FILE_PATH])
      .commit(DATE, { '--date': DATE }, makeCommit.bind(this, --n));
  });
};

makeCommit(200);
