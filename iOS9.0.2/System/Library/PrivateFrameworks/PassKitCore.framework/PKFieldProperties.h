/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PKFieldProperties : NSObject <NSSecureCoding> {

	unsigned _technology;
	unsigned _mode;
	NSArray* _merchantIdentifiers;

}

@property (nonatomic,readonly) unsigned technology;                        //@synthesize technology=_technology - In the implementation block
@property (nonatomic,readonly) unsigned mode;                              //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) NSArray * merchantIdentifiers;              //@synthesize merchantIdentifiers=_merchantIdentifiers - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithTechnology:(unsigned)arg1 mode:(unsigned)arg2 merchantIdentifiers:(id)arg3 ;
-(NSArray *)merchantIdentifiers;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned)mode;
-(unsigned)technology;
@end

