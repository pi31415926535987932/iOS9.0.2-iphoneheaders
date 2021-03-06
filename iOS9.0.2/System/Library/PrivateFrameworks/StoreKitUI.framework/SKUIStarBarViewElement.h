/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@interface SKUIStarBarViewElement : SKUIViewElement {

	int _numberOfRatings;
	int _numberOfStars;
	float _value;

}

@property (nonatomic,readonly) int numberOfRatings;              //@synthesize numberOfRatings=_numberOfRatings - In the implementation block
@property (nonatomic,readonly) int numberOfStars;                //@synthesize numberOfStars=_numberOfStars - In the implementation block
@property (nonatomic,readonly) float value;                      //@synthesize value=_value - In the implementation block
-(float)value;
-(int)numberOfRatings;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(int)numberOfStars;
@end

