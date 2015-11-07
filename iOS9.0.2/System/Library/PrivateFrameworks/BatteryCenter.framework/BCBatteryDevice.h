/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BatteryCenter.framework/BatteryCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BatteryCenter/BatteryCenter-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDictionary, UIImage;

@interface BCBatteryDevice : NSObject <NSCopying, NSCoding> {

	NSString* _matchIdentifier;
	int _percentCharge;
	char _charging;
	NSDictionary* _glyphs;
	char _connected;
	char _internal;
	char _powerSource;
	char _fake;
	NSString* _identifier;
	int _vendor;
	int _powerSourceState;
	int _productIdentifier;
	NSString* _name;
	unsigned _parts;
	NSString* _baseIdentifier;
	int _transportType;

}

@property (nonatomic,copy,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) int vendor;                                       //@synthesize vendor=_vendor - In the implementation block
@property (assign,nonatomic) int powerSourceState;                               //@synthesize powerSourceState=_powerSourceState - In the implementation block
@property (nonatomic,readonly) int productIdentifier;                            //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,retain,readonly) UIImage * glyph; 
@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int percentCharge;                                  //@synthesize percentCharge=_percentCharge - In the implementation block
@property (assign,getter=isConnected,nonatomic) char connected;                  //@synthesize connected=_connected - In the implementation block
@property (assign,getter=isCharging,nonatomic) char charging;                    //@synthesize charging=_charging - In the implementation block
@property (assign,getter=isInternal,nonatomic) char internal;                    //@synthesize internal=_internal - In the implementation block
@property (assign,getter=isPowerSource,nonatomic) char powerSource;              //@synthesize powerSource=_powerSource - In the implementation block
@property (assign,nonatomic) unsigned parts;                                     //@synthesize parts=_parts - In the implementation block
@property (nonatomic,copy,readonly) NSString * matchIdentifier;                  //@synthesize matchIdentifier=_matchIdentifier - In the implementation block
@property (nonatomic,copy) NSString * baseIdentifier;                            //@synthesize baseIdentifier=_baseIdentifier - In the implementation block
@property (assign,nonatomic) int transportType;                                  //@synthesize transportType=_transportType - In the implementation block
@property (assign,getter=isFake,nonatomic) char fake;                            //@synthesize fake=_fake - In the implementation block
+(id)batteryDeviceWithVendor:(int)arg1 productIdentifier:(int)arg2 baseIdentifier:(id)arg3 parts:(unsigned)arg4 matchIdentifier:(id)arg5 ;
-(char)isInternal;
-(int)productIdentifier;
-(UIImage *)glyph;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)vendor;
-(NSString *)matchIdentifier;
-(int)percentCharge;
-(char)isFake;
-(void)setPowerSourceState:(int)arg1 ;
-(void)setPercentCharge:(int)arg1 ;
-(void)setCharging:(char)arg1 ;
-(id)initWithVendor:(int)arg1 productIdentifier:(int)arg2 baseIdentifier:(id)arg3 parts:(unsigned)arg4 matchIdentifier:(id)arg5 ;
-(id)_lazyGlyphs;
-(void)setFake:(char)arg1 ;
-(id)glyphForPartKey:(id)arg1 ;
-(int)powerSourceState;
-(char)isCharging;
-(char)isPowerSource;
-(void)setParts:(unsigned)arg1 ;
-(void)setBaseIdentifier:(NSString *)arg1 ;
-(char)isConnected;
-(void)setPowerSource:(char)arg1 ;
-(unsigned)parts;
-(void)setInternal:(char)arg1 ;
-(void)setTransportType:(int)arg1 ;
-(int)transportType;
-(NSString *)baseIdentifier;
-(void)setConnected:(char)arg1 ;
@end
