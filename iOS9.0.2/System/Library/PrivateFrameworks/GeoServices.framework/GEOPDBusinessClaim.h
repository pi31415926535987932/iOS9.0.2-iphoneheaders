/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOPDBusinessClaim : PBCodable <NSCopying> {

	NSString* _buttonLabel;
	NSString* _descriptionText;
	NSString* _titleText;
	char _buttonEnabled;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) char hasButtonLabel; 
@property (nonatomic,retain) NSString * buttonLabel;                  //@synthesize buttonLabel=_buttonLabel - In the implementation block
@property (assign,nonatomic) char hasButtonEnabled; 
@property (assign,nonatomic) char buttonEnabled;                      //@synthesize buttonEnabled=_buttonEnabled - In the implementation block
@property (nonatomic,readonly) char hasTitleText; 
@property (nonatomic,retain) NSString * titleText;                    //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,readonly) char hasDescriptionText; 
@property (nonatomic,retain) NSString * descriptionText;              //@synthesize descriptionText=_descriptionText - In the implementation block
+(id)businessClaimForPlaceData:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setTitleText:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)buttonEnabled;
-(NSString *)titleText;
-(char)hasButtonEnabled;
-(void)setButtonLabel:(NSString *)arg1 ;
-(char)hasDescriptionText;
-(NSString *)buttonLabel;
-(char)hasButtonLabel;
-(char)hasTitleText;
-(void)setButtonEnabled:(char)arg1 ;
-(void)setHasButtonEnabled:(char)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)descriptionText;
@end

