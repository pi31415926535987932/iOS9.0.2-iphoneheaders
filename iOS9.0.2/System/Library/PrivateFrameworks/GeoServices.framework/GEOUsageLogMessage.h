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

@class GEOLongSessionUsageLogMessage, GEONoSessionUsageLogMessage, GEOShortSessionUsageLogMessage;

@interface GEOUsageLogMessage : PBCodable <NSCopying> {

	GEOLongSessionUsageLogMessage* _longSessionUsageLogMessage;
	GEONoSessionUsageLogMessage* _noSessionUsageLogMessage;
	GEOShortSessionUsageLogMessage* _shortSessionUsageLogMessage;

}

@property (nonatomic,readonly) char hasShortSessionUsageLogMessage; 
@property (nonatomic,retain) GEOShortSessionUsageLogMessage * shortSessionUsageLogMessage;              //@synthesize shortSessionUsageLogMessage=_shortSessionUsageLogMessage - In the implementation block
@property (nonatomic,readonly) char hasLongSessionUsageLogMessage; 
@property (nonatomic,retain) GEOLongSessionUsageLogMessage * longSessionUsageLogMessage;                //@synthesize longSessionUsageLogMessage=_longSessionUsageLogMessage - In the implementation block
@property (nonatomic,readonly) char hasNoSessionUsageLogMessage; 
@property (nonatomic,retain) GEONoSessionUsageLogMessage * noSessionUsageLogMessage;                    //@synthesize noSessionUsageLogMessage=_noSessionUsageLogMessage - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEONoSessionUsageLogMessage *)noSessionUsageLogMessage;
-(GEOShortSessionUsageLogMessage *)shortSessionUsageLogMessage;
-(char)hasShortSessionUsageLogMessage;
-(char)hasNoSessionUsageLogMessage;
-(void)setLongSessionUsageLogMessage:(GEOLongSessionUsageLogMessage *)arg1 ;
-(void)setNoSessionUsageLogMessage:(GEONoSessionUsageLogMessage *)arg1 ;
-(char)hasLongSessionUsageLogMessage;
-(void)setShortSessionUsageLogMessage:(GEOShortSessionUsageLogMessage *)arg1 ;
-(GEOLongSessionUsageLogMessage *)longSessionUsageLogMessage;
-(char)readFrom:(id)arg1 ;
@end

