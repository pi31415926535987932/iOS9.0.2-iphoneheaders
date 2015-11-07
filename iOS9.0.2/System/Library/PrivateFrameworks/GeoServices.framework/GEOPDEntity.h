/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOPDEntity : PBCodable <NSCopying> {

	NSMutableArray* _altFaxs;
	NSMutableArray* _altTelephones;
	NSMutableArray* _altUrls;
	NSString* _fax;
	NSMutableArray* _localizedCategorys;
	NSMutableArray* _names;
	NSMutableArray* _spokenNames;
	NSString* _telephone;
	int _type;
	NSString* _url;
	char _isDisputed;
	char _isPermanentlyClosed;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char hasTelephone; 
@property (nonatomic,retain) NSString * telephone;                             //@synthesize telephone=_telephone - In the implementation block
@property (nonatomic,retain) NSMutableArray * altTelephones;                   //@synthesize altTelephones=_altTelephones - In the implementation block
@property (nonatomic,readonly) char hasFax; 
@property (nonatomic,retain) NSString * fax;                                   //@synthesize fax=_fax - In the implementation block
@property (nonatomic,retain) NSMutableArray * altFaxs;                         //@synthesize altFaxs=_altFaxs - In the implementation block
@property (nonatomic,readonly) char hasUrl; 
@property (nonatomic,retain) NSString * url;                                   //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSMutableArray * altUrls;                         //@synthesize altUrls=_altUrls - In the implementation block
@property (assign,nonatomic) char hasIsPermanentlyClosed; 
@property (assign,nonatomic) char isPermanentlyClosed;                         //@synthesize isPermanentlyClosed=_isPermanentlyClosed - In the implementation block
@property (assign,nonatomic) char hasIsDisputed; 
@property (assign,nonatomic) char isDisputed;                                  //@synthesize isDisputed=_isDisputed - In the implementation block
@property (nonatomic,retain) NSMutableArray * names;                           //@synthesize names=_names - In the implementation block
@property (nonatomic,retain) NSMutableArray * spokenNames;                     //@synthesize spokenNames=_spokenNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedCategorys;              //@synthesize localizedCategorys=_localizedCategorys - In the implementation block
+(id)entityForPlaceData:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)url;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)hasTelephone;
-(void)setTelephone:(NSString *)arg1 ;
-(NSString *)telephone;
-(void)setHasIsDisputed:(char)arg1 ;
-(char)hasIsDisputed;
-(void)setIsDisputed:(char)arg1 ;
-(char)isDisputed;
-(char)hasUrl;
-(id)bestLocalizedName;
-(void)addAltFax:(id)arg1 ;
-(void)setSpokenNames:(NSMutableArray *)arg1 ;
-(void)addSpokenName:(id)arg1 ;
-(void)clearAltUrls;
-(id)altTelephoneAtIndex:(unsigned)arg1 ;
-(unsigned)spokenNamesCount;
-(id)spokenNameAtIndex:(unsigned)arg1 ;
-(NSString *)fax;
-(id)altFaxAtIndex:(unsigned)arg1 ;
-(void)setAltFaxs:(NSMutableArray *)arg1 ;
-(void)addAltUrl:(id)arg1 ;
-(unsigned)altFaxsCount;
-(char)hasFax;
-(void)addName:(id)arg1 ;
-(unsigned)altTelephonesCount;
-(NSMutableArray *)altTelephones;
-(unsigned)altUrlsCount;
-(NSMutableArray *)spokenNames;
-(void)clearSpokenNames;
-(void)addLocalizedCategory:(id)arg1 ;
-(char)hasIsPermanentlyClosed;
-(void)setLocalizedCategorys:(NSMutableArray *)arg1 ;
-(unsigned)localizedCategorysCount;
-(NSMutableArray *)altUrls;
-(id)localizedCategoryAtIndex:(unsigned)arg1 ;
-(unsigned)namesCount;
-(void)addAltTelephone:(id)arg1 ;
-(void)setIsPermanentlyClosed:(char)arg1 ;
-(id)nameAtIndex:(unsigned)arg1 ;
-(void)setAltTelephones:(NSMutableArray *)arg1 ;
-(void)setHasIsPermanentlyClosed:(char)arg1 ;
-(char)isPermanentlyClosed;
-(void)setAltUrls:(NSMutableArray *)arg1 ;
-(id)altUrlAtIndex:(unsigned)arg1 ;
-(void)clearLocalizedCategorys;
-(NSMutableArray *)localizedCategorys;
-(void)clearAltTelephones;
-(NSMutableArray *)altFaxs;
-(void)clearNames;
-(void)clearAltFaxs;
-(void)setNames:(NSMutableArray *)arg1 ;
-(void)setFax:(NSString *)arg1 ;
-(char)readFrom:(id)arg1 ;
-(NSMutableArray *)names;
-(char)hasType;
@end
