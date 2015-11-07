/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOAdditionalEnabledMarkets, GEOClientCapabilities, GEOLocation, NSMutableArray, NSData, GEORouteAttributes, GEORouteSummaryAttributes, GEOTFTrafficSnapshot;

@interface GEOETATrafficUpdateRequest : PBRequest <NSCopying> {

	SCD_Struct_GE4 _sessionID;
	SCD_Struct_GE61 _clientTimepoint;
	GEOAdditionalEnabledMarkets* _additionalEnabledMarkets;
	GEOClientCapabilities* _clientCapabilities;
	GEOLocation* _currentUserLocation;
	NSMutableArray* _destinationWaypointTypeds;
	NSData* _directionsResponseID;
	unsigned _previouslyRejectedRerouteSavings;
	int _rerouteStatus;
	GEORouteAttributes* _routeAttributes;
	GEORouteSummaryAttributes* _routeSummaryAttributes;
	NSMutableArray* _routes;
	NSMutableArray* _serviceTags;
	NSData* _sessionState;
	GEOTFTrafficSnapshot* _trafficSnapshot;
	char _includeBetterRouteSuggestion;
	char _useClientTimepointAsNow;
	char _useLiveTrafficAsFallback;
	SCD_Struct_GE63 _has;

}

@property (nonatomic,readonly) char hasTrafficSnapshot; 
@property (nonatomic,retain) GEOTFTrafficSnapshot * trafficSnapshot; 
@property (assign,nonatomic) char hasUseLiveTrafficAsFallback; 
@property (assign,nonatomic) char useLiveTrafficAsFallback; 
@property (assign,nonatomic) char hasClientTimepoint; 
@property (assign,nonatomic) SCD_Struct_GE64 clientTimepoint; 
@property (assign,nonatomic) char hasUseClientTimepointAsNow; 
@property (assign,nonatomic) char useClientTimepointAsNow; 
@property (nonatomic,readonly) char hasCurrentUserLocation; 
@property (nonatomic,retain) GEOLocation * currentUserLocation;                                   //@synthesize currentUserLocation=_currentUserLocation - In the implementation block
@property (nonatomic,readonly) char hasRouteAttributes; 
@property (nonatomic,retain) GEORouteAttributes * routeAttributes;                                //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (assign,nonatomic) char hasIncludeBetterRouteSuggestion; 
@property (assign,nonatomic) char includeBetterRouteSuggestion;                                   //@synthesize includeBetterRouteSuggestion=_includeBetterRouteSuggestion - In the implementation block
@property (nonatomic,retain) NSMutableArray * routes;                                             //@synthesize routes=_routes - In the implementation block
@property (nonatomic,readonly) char hasClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * clientCapabilities;                          //@synthesize clientCapabilities=_clientCapabilities - In the implementation block
@property (nonatomic,readonly) char hasDirectionsResponseID; 
@property (nonatomic,retain) NSData * directionsResponseID;                                       //@synthesize directionsResponseID=_directionsResponseID - In the implementation block
@property (assign,nonatomic) char hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE4 sessionID;                                            //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) char hasAdditionalEnabledMarkets; 
@property (nonatomic,retain) GEOAdditionalEnabledMarkets * additionalEnabledMarkets;              //@synthesize additionalEnabledMarkets=_additionalEnabledMarkets - In the implementation block
@property (nonatomic,retain) NSMutableArray * destinationWaypointTypeds;                          //@synthesize destinationWaypointTypeds=_destinationWaypointTypeds - In the implementation block
@property (assign,nonatomic) char hasPreviouslyRejectedRerouteSavings; 
@property (assign,nonatomic) unsigned previouslyRejectedRerouteSavings;                           //@synthesize previouslyRejectedRerouteSavings=_previouslyRejectedRerouteSavings - In the implementation block
@property (nonatomic,readonly) char hasSessionState; 
@property (nonatomic,retain) NSData * sessionState;                                               //@synthesize sessionState=_sessionState - In the implementation block
@property (assign,nonatomic) char hasRerouteStatus; 
@property (assign,nonatomic) int rerouteStatus;                                                   //@synthesize rerouteStatus=_rerouteStatus - In the implementation block
@property (nonatomic,readonly) char hasRouteSummaryAttributes; 
@property (nonatomic,retain) GEORouteSummaryAttributes * routeSummaryAttributes;                  //@synthesize routeSummaryAttributes=_routeSummaryAttributes - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceTags;                                        //@synthesize serviceTags=_serviceTags - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasDirectionsResponseID;
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(NSData *)directionsResponseID;
-(void)setSessionID:(SCD_Struct_GE4)arg1 ;
-(void)setHasSessionID:(char)arg1 ;
-(char)hasSessionID;
-(SCD_Struct_GE4)sessionID;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(id)serviceTagAtIndex:(unsigned)arg1 ;
-(char)hasCurrentUserLocation;
-(void)setTrafficSnapshot:(GEOTFTrafficSnapshot *)arg1 ;
-(unsigned)serviceTagsCount;
-(char)hasTrafficSnapshot;
-(NSMutableArray *)serviceTags;
-(GEOTFTrafficSnapshot *)trafficSnapshot;
-(void)setSessionState:(NSData *)arg1 ;
-(char)hasRouteSummaryAttributes;
-(char)useLiveTrafficAsFallback;
-(void)setRouteAttributes:(GEORouteAttributes *)arg1 ;
-(void)clearServiceTags;
-(char)hasAdditionalEnabledMarkets;
-(void)setUseLiveTrafficAsFallback:(char)arg1 ;
-(void)setHasUseLiveTrafficAsFallback:(char)arg1 ;
-(GEOAdditionalEnabledMarkets *)additionalEnabledMarkets;
-(void)addServiceTag:(id)arg1 ;
-(GEOLocation *)currentUserLocation;
-(char)hasUseLiveTrafficAsFallback;
-(void)setRouteSummaryAttributes:(GEORouteSummaryAttributes *)arg1 ;
-(void)setCurrentUserLocation:(GEOLocation *)arg1 ;
-(char)hasClientCapabilities;
-(char)hasSessionState;
-(void)setAdditionalEnabledMarkets:(GEOAdditionalEnabledMarkets *)arg1 ;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(NSData *)sessionState;
-(void)setClientCapabilities:(GEOClientCapabilities *)arg1 ;
-(GEOClientCapabilities *)clientCapabilities;
-(GEORouteSummaryAttributes *)routeSummaryAttributes;
-(char)hasRouteAttributes;
-(GEORouteAttributes *)routeAttributes;
-(unsigned)routesCount;
-(id)routeAtIndex:(unsigned)arg1 ;
-(void)setRoutes:(NSMutableArray *)arg1 ;
-(void)clearRoutes;
-(void)addRoute:(id)arg1 ;
-(NSMutableArray *)routes;
-(void)addDestinationWaypointTyped:(id)arg1 ;
-(NSMutableArray *)destinationWaypointTypeds;
-(id)destinationWaypointTypedAtIndex:(unsigned)arg1 ;
-(unsigned)destinationWaypointTypedsCount;
-(void)setDestinationWaypointTypeds:(NSMutableArray *)arg1 ;
-(void)clearDestinationWaypointTypeds;
-(char)includeBetterRouteSuggestion;
-(void)setRerouteStatus:(int)arg1 ;
-(void)setHasRerouteStatus:(char)arg1 ;
-(unsigned)previouslyRejectedRerouteSavings;
-(SCD_Struct_GE64)clientTimepoint;
-(char)hasRerouteStatus;
-(void)setIncludeBetterRouteSuggestion:(char)arg1 ;
-(void)setClientTimepoint:(SCD_Struct_GE64)arg1 ;
-(void)setPreviouslyRejectedRerouteSavings:(unsigned)arg1 ;
-(void)setHasClientTimepoint:(char)arg1 ;
-(void)setHasPreviouslyRejectedRerouteSavings:(char)arg1 ;
-(char)useClientTimepointAsNow;
-(char)hasPreviouslyRejectedRerouteSavings;
-(char)hasClientTimepoint;
-(void)setHasIncludeBetterRouteSuggestion:(char)arg1 ;
-(void)setUseClientTimepointAsNow:(char)arg1 ;
-(int)rerouteStatus;
-(char)hasUseClientTimepointAsNow;
-(void)setHasUseClientTimepointAsNow:(char)arg1 ;
-(char)hasIncludeBetterRouteSuggestion;
-(char)readFrom:(id)arg1 ;
@end
