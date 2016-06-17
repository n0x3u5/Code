/// <reference path="_all.ts" />
/**
 * @type {angular.Module}
 */
var FlapperNews;
(function (FlapperNews) {
    'use strict';
    var app = angular.module('flapperNews', []).controller('MainCtrl', function NewsController($scope) {
        $scope.test = "Hello Uranus!";
    });
})(FlapperNews || (FlapperNews = {}));
//# sourceMappingURL=app.js.map