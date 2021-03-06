/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@interface AKRichBrushStrokePoint : NSObject {

	float _width;
	CGPoint _location;

}

@property (assign,nonatomic) CGPoint location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) float width;                   //@synthesize width=_width - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)width;
-(CGPoint)location;
-(void)setWidth:(float)arg1 ;
-(void)setLocation:(CGPoint)arg1 ;
@end

