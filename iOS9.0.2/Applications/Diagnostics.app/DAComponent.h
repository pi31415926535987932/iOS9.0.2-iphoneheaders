/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Diagnostics/DAPresenceCheckProtocol.h>

@class NSString, NSMutableDictionary;

@interface DAComponent : NSObject <DAPresenceCheckProtocol> {

	NSString* _type;
	NSString* _identifier;
	NSMutableDictionary* _data;

}

@property (nonatomic,retain) NSString * type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * serialNumber; 
@property (nonatomic,retain) NSMutableDictionary * data;              //@synthesize data=_data - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)checkPresence;
-(char)isPresent;
-(id)profile;
-(char)isValidIdentifier:(id)arg1 ;
-(id)init;
-(NSString *)identifier;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSMutableDictionary *)data;
-(void)setData:(NSMutableDictionary *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)serialNumber;
@end
