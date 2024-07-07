const MILLISECONDS_PER_SECOND = Math.pow(10, 3);
const ONE_BILLION = Math.pow(10, 9);

const GIGASECOND = ONE_BILLION * MILLISECONDS_PER_SECOND;

export const gigasecond = date => new Date(date.getTime() + GIGASECOND);
