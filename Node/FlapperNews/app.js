/// <reference path="_all.ts" />
/**
 * @type {angular.Module}
 */
var FlapperNews;
(function (FlapperNews) {
    'use strict';
    var app = angular.module('flapperNews', []);
    app.controller("MainCtrl", function MainCtrl($scope) {
        $scope.posts = [
            { title: 'post 1', upvotes: 5 },
            { title: 'post 2', upvotes: 2 },
            { title: 'post 3', upvotes: 15 },
            { title: 'post 4', upvotes: 9 },
            { title: 'post 5', upvotes: 4 }
        ];
    });
})(FlapperNews || (FlapperNews = {}));
//# sourceMappingURL=app.js.map