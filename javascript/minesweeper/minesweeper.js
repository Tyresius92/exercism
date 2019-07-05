const isSpaceOnBoard = (board, vertIndex, horizIndex) => {
  return (
    vertIndex >= 0 &&
    vertIndex < board.length &&
    horizIndex >= 0 &&
    horizIndex < board[vertIndex].length
  );
};

const isCurrentSpace = (vertOffset, horizOffset) => {
  return vertOffset === 0 && horizOffset === 0;
};

const isSpaceBomb = (board, vertIndex, horizIndex) => {
  return board[vertIndex][horizIndex] === '*';
};

const getCountForSpace = (board, vertIndex, horizIndex) => {
  let count = 0;
  for (let vertOffset = -1; vertOffset < 2; vertOffset++) {
    for (let horizOffset = -1; horizOffset < 2; horizOffset++) {
      const checkVert = vertIndex + vertOffset;
      const checkHoriz = horizIndex + horizOffset;

      if (
        !isCurrentSpace(vertOffset, horizOffset) &&
        isSpaceOnBoard(board, checkVert, checkHoriz) &&
        isSpaceBomb(board, checkVert, checkHoriz)
      ) {
        count++;
      }
    }
  }
  return count;
};

export const annotate = board => {
  let resultBoard = [];

  board.forEach((row, vertIndex) => {
    let resultRow = '';

    [...row].forEach((char, horizIndex) => {
      if (isSpaceBomb(board, vertIndex, horizIndex)) {
        resultRow += '*';
      } else {
        const count = getCountForSpace(board, vertIndex, horizIndex);
        resultRow += count === 0 ? ' ' : count.toString();
      }
    });

    resultBoard.push(resultRow);
  });

  return resultBoard;
};
