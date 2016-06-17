/// <reference path="_all.ts" />

/**
 * @type {angular.Module}
 */
module FlapperNews {
    'use strict';
    var app = angular.module('flapperNews', []).controller('MainCtrl', function NewsController($scope) {
        $scope.test = "Hello Uranus!";
    });
}