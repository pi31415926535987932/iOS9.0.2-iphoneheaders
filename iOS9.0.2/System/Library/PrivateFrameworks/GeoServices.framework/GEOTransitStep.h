/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOTransitArrivalInfo, NSMutableArray, GEOInstructionSet, GEOLatLng, GEOPBTransitRoutingIncidentMessage;

@interface GEOTransitStep : PBCodable <NSCopying> {

	SCD_Struct_GE52* _routeDetailsPrimaryArtworkIndexs;
	SCD_Struct_GE52* _steppingArtworkIndexs;
	unsigned _accessPointZilchIndex;
	GEOTransitArrivalInfo* _arrivalInfo;
	unsigned _defaultVehicleInfoIndex;
	unsigned _departureFrequency;
	unsigned _distanceInMeters;
	unsigned _endingStopIndex;
	NSMutableArray* _enterExitInfos;
	GEOInstructionSet* _instructions;
	unsigned _listTransitIncidentMessageIndex;
	GEOLatLng* _location;
	int _maneuverType;
	unsigned _routeDetailsSecondaryArtworkIndex;
	int _significanceForEndNode;
	unsigned _startingStopIndex;
	unsigned _startingTime;
	unsigned _steppingTransitIncidentMessageIndex;
	NSMutableArray* _transferInfos;
	GEOPBTransitRoutingIncidentMessage* _transitIncidentMessage;
	NSMutableArray* _vehicleInfos;
	unsigned _walkingIndex;
	unsigned _zilchIndex;
	char _prioritizeTilesPreloading;
	SCD_Struct_GE69 _has;

}

@property (assign,nonatomic) char hasManeuverType; 
@property (assign,nonatomic) int maneuverType;                                                         //@synthesize maneuverType=_maneuverType - In the implementation block
@property (assign,nonatomic) char hasStartingStopIndex; 
@property (assign,nonatomic) unsigned startingStopIndex;                                               //@synthesize startingStopIndex=_startingStopIndex - In the implementation block
@property (assign,nonatomic) char hasEndingStopIndex; 
@property (assign,nonatomic) unsigned endingStopIndex;                                                 //@synthesize endingStopIndex=_endingStopIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * vehicleInfos;                                            //@synthesize vehicleInfos=_vehicleInfos - In the implementation block
@property (nonatomic,retain) NSMutableArray * enterExitInfos;                                          //@synthesize enterExitInfos=_enterExitInfos - In the implementation block
@property (assign,nonatomic) char hasPrioritizeTilesPreloading; 
@property (assign,nonatomic) char prioritizeTilesPreloading;                                           //@synthesize prioritizeTilesPreloading=_prioritizeTilesPreloading - In the implementation block
@property (assign,nonatomic) char hasWalkingIndex; 
@property (assign,nonatomic) unsigned walkingIndex;                                                    //@synthesize walkingIndex=_walkingIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * transferInfos;                                           //@synthesize transferInfos=_transferInfos - In the implementation block
@property (assign,nonatomic) char hasStartingTime; 
@property (assign,nonatomic) unsigned startingTime;                                                    //@synthesize startingTime=_startingTime - In the implementation block
@property (nonatomic,readonly) char hasArrivalInfo; 
@property (nonatomic,retain) GEOTransitArrivalInfo * arrivalInfo;                                      //@synthesize arrivalInfo=_arrivalInfo - In the implementation block
@property (nonatomic,readonly) char hasLocation; 
@property (nonatomic,retain) GEOLatLng * location;                                                     //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) char hasSignificanceForEndNode; 
@property (assign,nonatomic) int significanceForEndNode;                                               //@synthesize significanceForEndNode=_significanceForEndNode - In the implementation block
@property (nonatomic,readonly) char hasInstructions; 
@property (nonatomic,retain) GEOInstructionSet * instructions;                                         //@synthesize instructions=_instructions - In the implementation block
@property (assign,nonatomic) char hasZilchIndex; 
@property (assign,nonatomic) unsigned zilchIndex;                                                      //@synthesize zilchIndex=_zilchIndex - In the implementation block
@property (assign,nonatomic) char hasDistanceInMeters; 
@property (assign,nonatomic) unsigned distanceInMeters;                                                //@synthesize distanceInMeters=_distanceInMeters - In the implementation block
@property (nonatomic,readonly) char hasTransitIncidentMessage; 
@property (nonatomic,retain) GEOPBTransitRoutingIncidentMessage * transitIncidentMessage;              //@synthesize transitIncidentMessage=_transitIncidentMessage - In the implementation block
@property (nonatomic,readonly) unsigned routeDetailsPrimaryArtworkIndexsCount; 
@property (nonatomic,readonly) unsigned* routeDetailsPrimaryArtworkIndexs; 
@property (nonatomic,readonly) unsigned steppingArtworkIndexsCount; 
@property (nonatomic,readonly) unsigned* steppingArtworkIndexs; 
@property (assign,nonatomic) char hasRouteDetailsSecondaryArtworkIndex; 
@property (assign,nonatomic) unsigned routeDetailsSecondaryArtworkIndex;                               //@synthesize routeDetailsSecondaryArtworkIndex=_routeDetailsSecondaryArtworkIndex - In the implementation block
@property (assign,nonatomic) char hasAccessPointZilchIndex; 
@property (assign,nonatomic) unsigned accessPointZilchIndex;                                           //@synthesize accessPointZilchIndex=_accessPointZilchIndex - In the implementation block
@property (assign,nonatomic) char hasDefaultVehicleInfoIndex; 
@property (assign,nonatomic) unsigned defaultVehicleInfoIndex;                                         //@synthesize defaultVehicleInfoIndex=_defaultVehicleInfoIndex - In the implementation block
@property (assign,nonatomic) char hasDepartureFrequency; 
@property (assign,nonatomic) unsigned departureFrequency;                                              //@synthesize departureFrequency=_departureFrequency - In the implementation block
@property (assign,nonatomic) char hasSteppingTransitIncidentMessageIndex; 
@property (assign,nonatomic) unsigned steppingTransitIncidentMessageIndex;                             //@synthesize steppingTransitIncidentMessageIndex=_steppingTransitIncidentMessageIndex - In the implementation block
@property (assign,nonatomic) char hasListTransitIncidentMessageIndex; 
@property (assign,nonatomic) unsigned listTransitIncidentMessageIndex;                                 //@synthesize listTransitIncidentMessageIndex=_listTransitIncidentMessageIndex - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOLatLng *)location;
-(id)dictionaryRepresentation;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasLocation;
-(unsigned*)routeDetailsPrimaryArtworkIndexs;
-(void)addRouteDetailsPrimaryArtworkIndex:(unsigned)arg1 ;
-(GEOInstructionSet *)instructions;
-(unsigned)routeDetailsPrimaryArtworkIndexsCount;
-(unsigned)steppingArtworkIndexAtIndex:(unsigned)arg1 ;
-(void)addSteppingArtworkIndex:(unsigned)arg1 ;
-(char)hasRouteDetailsSecondaryArtworkIndex;
-(void)setSteppingArtworkIndexs:(unsigned*)arg1 count:(unsigned)arg2 ;
-(unsigned*)steppingArtworkIndexs;
-(void)setInstructions:(GEOInstructionSet *)arg1 ;
-(void)clearSteppingArtworkIndexs;
-(void)clearRouteDetailsPrimaryArtworkIndexs;
-(void)setRouteDetailsSecondaryArtworkIndex:(unsigned)arg1 ;
-(unsigned)routeDetailsPrimaryArtworkIndexAtIndex:(unsigned)arg1 ;
-(void)setRouteDetailsPrimaryArtworkIndexs:(unsigned*)arg1 count:(unsigned)arg2 ;
-(unsigned)routeDetailsSecondaryArtworkIndex;
-(char)hasInstructions;
-(void)setHasRouteDetailsSecondaryArtworkIndex:(char)arg1 ;
-(unsigned)steppingArtworkIndexsCount;
-(char)hasTransitIncidentMessage;
-(GEOPBTransitRoutingIncidentMessage *)transitIncidentMessage;
-(void)setTransitIncidentMessage:(GEOPBTransitRoutingIncidentMessage *)arg1 ;
-(char)hasManeuverType;
-(void)setHasManeuverType:(char)arg1 ;
-(int)maneuverType;
-(void)setManeuverType:(int)arg1 ;
-(NSMutableArray *)enterExitInfos;
-(void)clearTransferInfos;
-(char)hasZilchIndex;
-(char)hasDepartureFrequency;
-(void)setStartingTime:(unsigned)arg1 ;
-(void)setSteppingTransitIncidentMessageIndex:(unsigned)arg1 ;
-(void)setHasZilchIndex:(char)arg1 ;
-(unsigned)endingStopIndex;
-(void)setZilchIndex:(unsigned)arg1 ;
-(void)setArrivalInfo:(GEOTransitArrivalInfo *)arg1 ;
-(void)setHasEndingStopIndex:(char)arg1 ;
-(char)hasEndingStopIndex;
-(char)hasWalkingIndex;
-(unsigned)startingStopIndex;
-(unsigned)zilchIndex;
-(void)setHasSteppingTransitIncidentMessageIndex:(char)arg1 ;
-(char)hasArrivalInfo;
-(unsigned)listTransitIncidentMessageIndex;
-(char)hasDistanceInMeters;
-(char)hasDefaultVehicleInfoIndex;
-(void)setHasDistanceInMeters:(char)arg1 ;
-(unsigned)startingTime;
-(unsigned)enterExitInfosCount;
-(void)setDepartureFrequency:(unsigned)arg1 ;
-(id)enterExitInfoAtIndex:(unsigned)arg1 ;
-(void)setDistanceInMeters:(unsigned)arg1 ;
-(id)vehicleInfoAtIndex:(unsigned)arg1 ;
-(char)hasStartingTime;
-(unsigned)steppingTransitIncidentMessageIndex;
-(unsigned)vehicleInfosCount;
-(void)setVehicleInfos:(NSMutableArray *)arg1 ;
-(void)setHasStartingTime:(char)arg1 ;
-(GEOTransitArrivalInfo *)arrivalInfo;
-(void)setHasDepartureFrequency:(char)arg1 ;
-(char)hasListTransitIncidentMessageIndex;
-(void)setStartingStopIndex:(unsigned)arg1 ;
-(void)setHasAccessPointZilchIndex:(char)arg1 ;
-(void)setSignificanceForEndNode:(int)arg1 ;
-(unsigned)walkingIndex;
-(void)clearEnterExitInfos;
-(char)prioritizeTilesPreloading;
-(int)significanceForEndNode;
-(unsigned)accessPointZilchIndex;
-(char)hasAccessPointZilchIndex;
-(void)addTransferInfo:(id)arg1 ;
-(void)setHasPrioritizeTilesPreloading:(char)arg1 ;
-(NSMutableArray *)transferInfos;
-(unsigned)departureFrequency;
-(void)setEnterExitInfos:(NSMutableArray *)arg1 ;
-(void)setDefaultVehicleInfoIndex:(unsigned)arg1 ;
-(void)setPrioritizeTilesPreloading:(char)arg1 ;
-(void)clearVehicleInfos;
-(void)setHasDefaultVehicleInfoIndex:(char)arg1 ;
-(unsigned)defaultVehicleInfoIndex;
-(void)setHasWalkingIndex:(char)arg1 ;
-(id)transferInfoAtIndex:(unsigned)arg1 ;
-(char)hasSteppingTransitIncidentMessageIndex;
-(void)setEndingStopIndex:(unsigned)arg1 ;
-(char)hasSignificanceForEndNode;
-(unsigned)distanceInMeters;
-(unsigned)transferInfosCount;
-(NSMutableArray *)vehicleInfos;
-(void)setTransferInfos:(NSMutableArray *)arg1 ;
-(void)setHasStartingStopIndex:(char)arg1 ;
-(void)setHasSignificanceForEndNode:(char)arg1 ;
-(void)addEnterExitInfo:(id)arg1 ;
-(void)addVehicleInfo:(id)arg1 ;
-(char)hasPrioritizeTilesPreloading;
-(void)setListTransitIncidentMessageIndex:(unsigned)arg1 ;
-(void)setAccessPointZilchIndex:(unsigned)arg1 ;
-(void)setWalkingIndex:(unsigned)arg1 ;
-(void)setHasListTransitIncidentMessageIndex:(char)arg1 ;
-(char)hasStartingStopIndex;
-(char)readFrom:(id)arg1 ;
@end

