/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOStructuredAddress, GEOPDViewportInfo;

@interface GEOPDGeocodingParameters : PBCodable <NSCopying> {

	unsigned _maxResults;
	NSString* _queryString;
	GEOStructuredAddress* _structuredAddress;
	GEOPDViewportInfo* _viewportInfo;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) char hasQueryString; 
@property (nonatomic,retain) NSString * queryString;                                //@synthesize queryString=_queryString - In the implementation block
@property (assign,nonatomic) char hasMaxResults; 
@property (assign,nonatomic) unsigned maxResults;                                   //@synthesize maxResults=_maxResults - In the implementation block
@property (nonatomic,readonly) char hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo;                      //@synthesize viewportInfo=_viewportInfo - In the implementation block
@property (nonatomic,readonly) char hasStructuredAddress; 
@property (nonatomic,retain) GEOStructuredAddress * structuredAddress;              //@synthesize structuredAddress=_structuredAddress - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setQueryString:(NSString *)arg1 ;
-(NSString *)queryString;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOStructuredAddress *)structuredAddress;
-(void)setStructuredAddress:(GEOStructuredAddress *)arg1 ;
-(char)hasStructuredAddress;
-(void)setMaxResults:(unsigned)arg1 ;
-(char)hasMaxResults;
-(GEOPDViewportInfo *)viewportInfo;
-(char)hasViewportInfo;
-(unsigned)maxResults;
-(void)setHasMaxResults:(char)arg1 ;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(char)hasQueryString;
-(id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initWithForwardGeocodeAddress:(id)arg1 addressString:(id)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(char)readFrom:(id)arg1 ;
@end

