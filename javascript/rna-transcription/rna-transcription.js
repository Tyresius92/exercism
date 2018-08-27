var Transcriptor = function () {

};

Transcriptor.prototype.toRna = function (orig) {
        var result = '';

        for (var i = 0; i < orig.length; i++) {
                if (orig.charAt(i) == 'G') {
                        result += 'C';
                } else if (orig.charAt(i) == 'C') {
                        result += 'G'; 
                } else if (orig.charAt(i) == 'A') {
                        result += 'U'; 
                } else if (orig.charAt(i) == 'T') {
                        result += 'A'; 
                } else {
                        throw new Error('Invalid input DNA.'); 
                }
        }

        return result; 
}

module.exports = Transcriptor; 