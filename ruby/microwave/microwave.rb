class Microwave
  attr_reader :seconds
  attr_reader :minutes

  def initialize(seconds)
    dirty_padded_num_string = "%04d" % seconds

    dirty_seconds = dirty_padded_num_string[2, 2].to_i
    dirty_minutes = dirty_padded_num_string[0, 2].to_i 

    @minutes = dirty_minutes + dirty_seconds / 60
    @seconds = dirty_seconds % 60
  end

  def timer
    "%s:%s" % ["%02d" % @minutes, "%02d" % @seconds]
  end
end