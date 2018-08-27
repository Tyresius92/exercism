class Scale(object):

    no_mods = set(['C', 'a'])
    use_sharps = set(['G', 'D', 'A', 'E', 'B', 'F#', 'e', 'b', 'f#',
                      'c#', 'g#', 'd#'])
    use_flats = set(['F', 'Bb', 'Eb', 'Ab', 'Db', 'Gb', 'd', 'g', 'c',
                     'f', 'bb', 'eb'])

    chrom_with_sharp = ['A', 'A#', 'B', 'C', 'C#', 'D', 'D#', 'E', 'F',
                        'F#', 'G', 'G#'] 
    
    def __init__(self, tonic, intervals=None):
        if intervals == None:
            pass

        self.pitches = None
