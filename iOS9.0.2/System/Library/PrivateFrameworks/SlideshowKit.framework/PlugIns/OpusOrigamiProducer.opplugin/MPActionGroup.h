/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MPAction.h>
#import <OpusOrigamiProducer/MPActionSupport.h>

@class NSMutableArray;

@interface MPActionGroup : MPAction <MPActionSupport> {

	NSMutableArray* _actions;

}
+(id)actionGroup;
-(void)copyActions:(id)arg1 ;
-(void)configureTarget;
-(void)insertActions:(id)arg1 atIndex:(int)arg2 ;
-(void)configureAction:(id)arg1 atIndex:(int)arg2 ;
-(void)removeActionsAtIndices:(id)arg1 ;
-(void)insertAction:(id)arg1 atIndex:(int)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)actions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAction:(id)arg1 ;
-(void)removeAllActions;
-(void)addAction:(id)arg1 ;
-(unsigned)numberOfActions;
-(void)addActions:(id)arg1 ;
@end
