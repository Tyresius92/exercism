class Gigasecond
  GIGASECOND = 1_000_000_000

  def self.from(time)
    time + GIGASECOND
  end
end

if defined? Minitest
  describe 'Mentor Regression Tests' do
    it 'must not introduce a precision error when dividing' do
      actual = Gigasecond.from(1) / 3
      expected = 0
      expect(actual).must_be_within_delta 333_333_333.66667
    end
  end
end
