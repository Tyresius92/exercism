const SECONDS_PER_EARTH_YEAR = 31557600;

const EARTH_YEARS_PER_PLANET_YEAR_MAP = {
  mercury: 0.2408467,
  venus: 0.61519726,
  earth: 1.0,
  mars: 1.8808158,
  jupiter: 11.862615,
  saturn: 29.447498,
  uranus: 84.016846,
  neptune: 164.79132,
};

type PlanetNameType = keyof typeof EARTH_YEARS_PER_PLANET_YEAR_MAP;

const convertSecondsToEarthYears = (seconds: number): number =>
  seconds / SECONDS_PER_EARTH_YEAR;

const convertEarthYearsToPlanetYears = (
  planet: PlanetNameType,
  earthYears: number
): number => earthYears / EARTH_YEARS_PER_PLANET_YEAR_MAP[planet];

export const age = (planet: PlanetNameType, seconds: number): number => {
  const earthYears = convertSecondsToEarthYears(seconds);

  const planetYears = convertEarthYearsToPlanetYears(planet, earthYears);

  return Number(planetYears.toFixed(2));
};
