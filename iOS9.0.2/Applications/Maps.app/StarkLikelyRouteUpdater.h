/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/GEORouteHypothesizerDelegate.h>

@class NSHashTable, StarkSuggestion, GEORouteHypothesizerOld, GEORouteHypothesisOld, GEOURLRouteHandle, GEOComposedWaypoint, GEOETARoute, NSMutableArray, MNTraceRecorder, StarkRouteGeniusTestLogger, GEOComposedRoute, NSString, NSArray, NSDate;

@interface StarkLikelyRouteUpdater : NSObject <GEORouteHypothesizerDelegate> {

	NSHashTable* _observers;
	StarkSuggestion* _suggestion;
	GEORouteHypothesizerOld* _routeHypothesizer;
	GEORouteHypothesisOld* _lastHypothesis;
	GEOURLRouteHandle* _routeHandle;
	GEOComposedWaypoint* _source;
	GEOComposedWaypoint* _destination;
	double _remainingDistance;
	double _remainingTime;
	GEOETARoute* _etaRoute;
	NSMutableArray* _trafficIncidents;
	MNTraceRecorder* _traceRecorder;
	char _recordedInitialRoute;
	StarkRouteGeniusTestLogger* _testLogger;
	char _isForegroundRoute;
	char _isHighThermalPressureLevel;

}

@property (nonatomic,readonly) double score; 
@property (nonatomic,readonly) GEOComposedRoute * route; 
@property (nonatomic,readonly) StarkSuggestion * suggestion;                       //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,readonly) GEOURLRouteHandle * routeHandle;                    //@synthesize routeHandle=_routeHandle - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * address; 
@property (nonatomic,readonly) NSArray * addressLines; 
@property (nonatomic,readonly) double remainingDistance;                           //@synthesize remainingDistance=_remainingDistance - In the implementation block
@property (nonatomic,readonly) double remainingTime;                               //@synthesize remainingTime=_remainingTime - In the implementation block
@property (nonatomic,readonly) NSDate * etaFromLastLocation; 
@property (nonatomic,readonly) NSArray * trafficIncidents; 
@property (nonatomic,retain) StarkRouteGeniusTestLogger * testLogger;              //@synthesize testLogger=_testLogger - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(StarkSuggestion *)suggestion;
-(double)remainingDistance;
-(void)setTestLogger:(StarkRouteGeniusTestLogger *)arg1 ;
-(StarkRouteGeniusTestLogger *)testLogger;
-(void)updateThermalPressureLevel:(char)arg1 ;
-(void)setIsForegroundRoute:(char)arg1 ;
-(void)_updateETAUpdateFrequency;
-(id)initWithSuggestion:(id)arg1 traceRecorder:(id)arg2 ;
-(void)_updateRemainingTimeAndDistanceWithRouteMatch:(id)arg1 ;
-(NSDate *)etaFromLastLocation;
-(double)score;
-(NSString *)address;
-(NSString *)name;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)updateLocation:(id)arg1 ;
-(GEOComposedRoute *)route;
-(double)remainingTime;
-(GEOURLRouteHandle *)routeHandle;
-(NSArray *)trafficIncidents;
-(void)routeHypothesizer:(id)arg1 willSendETARequest:(id)arg2 ;
-(void)routeHypothesizer:(id)arg1 receivedETAError:(id)arg2 ;
-(void)routeHypothesizer:(id)arg1 matchedToRoute:(id)arg2 ;
-(void)routeHypothesizer:(id)arg1 willRequestNewRoute:(id)arg2 ;
-(void)routeHypothesizerUpdatedETA:(id)arg1 etaRoute:(id)arg2 ;
-(void)routeHypothesizerArrived:(id)arg1 ;
-(void)routeHypothesizerRerouted:(id)arg1 request:(id)arg2 response:(id)arg3 ;
-(void)routeHypothesizer:(id)arg1 receivedETAResponse:(id)arg2 ;
-(NSArray *)addressLines;
@end

