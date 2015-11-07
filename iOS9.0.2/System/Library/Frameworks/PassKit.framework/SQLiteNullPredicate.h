/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <passd/passd-Structs.h>
#import <passd/SQLitePropertyPredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SQLiteNullPredicate : SQLitePropertyPredicate <NSCopying> {

	char _matchesNull;

}

@property (nonatomic,readonly) char matchesNull;              //@synthesize matchesNull=_matchesNull - In the implementation block
+(id)isNullPredicateWithProperty:(id)arg1 ;
+(id)isNotNullPredicateWithProperty:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(char)matchesNull;
@end
