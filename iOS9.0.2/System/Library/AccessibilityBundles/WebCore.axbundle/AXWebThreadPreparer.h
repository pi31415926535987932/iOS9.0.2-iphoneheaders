/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/WebCore.axbundle/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AXWebThreadPreparer : NSObject {

	char _preparedThisRunLoop;
	char _preparedAnswer;

}

@property (assign,nonatomic) char preparedThisRunLoop;              //@synthesize preparedThisRunLoop=_preparedThisRunLoop - In the implementation block
@property (assign,nonatomic) char preparedAnswer;                   //@synthesize preparedAnswer=_preparedAnswer - In the implementation block
+(id)sharedPreparer;
-(char)preparedThisRunLoop;
-(void)setPreparedThisRunLoop:(char)arg1 ;
-(char)preparedAnswer;
-(void)setPreparedAnswer:(char)arg1 ;
-(id)init;
@end

