def to_rna(dna_strand):
    result = ''

    for i in dna_strand:
            if i == 'C':
                result = result + 'G'
            elif i == 'G':
                result = result + 'C'
            elif i == 'T':
                result = result + 'A'
            elif i == 'A':
                result = result + 'U'
            else:
                raise ValueError

    return result
