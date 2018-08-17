var Triangle = function (s1, s2, s3) {
        this.s1 = s1;
        this.s2 = s2; 
        this.s3 = s3; 
};

Triangle.prototype.kind = function () {
        if (this.s1 + this.s2 < this.s3 || this.s1 + this.s3 < this.s2 || 
            this.s2 + this.s3 < this.s1) {
                throw Error; 
        }

        if (this.s1 == 0 || this.s2 == 0 || this.s3 == 0) {
                throw Error; 
        }


        if (this.s1 == this.s2 && this.s2 == this.s3) {
                return 'equilateral';
        }

        if (this.s1 == this.s2 || this.s2 == this.s3 || this.s1 == this.s3) {
                return 'isosceles';
        }

        return 'scalene';
};

module.exports = Triangle; 