class ResistorColorDuo
  COLORS = [
    "black",
    "brown",
    "red",
    "orange",
    "yellow",
    "green",
    "blue",
    "violet",
    "grey",
    "white"
  ]

  def self.value(colors) 
    colors.slice(0, 2).map { |color| COLORS.index(color) }.join().to_i()
  end
end

