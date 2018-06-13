def detect_anagrams(word, candidates):
    anagrams = []

    for potential in candidates:
        if (len(potential) != len(word)) | (potential.lower() == word.lower()):
            continue
        
        potential_copy = potential.lower()
        
        for i in word.lower():            
            if i in potential_copy:
                potential_copy = potential_copy.replace(i, '', 1)

        if potential_copy == '':
            anagrams.append(potential)

    return anagrams
