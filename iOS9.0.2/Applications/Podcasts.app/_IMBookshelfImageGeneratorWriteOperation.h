/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, UIImage;

@interface _IMBookshelfImageGeneratorWriteOperation : NSOperation {

	NSString* _type;
	NSString* _path;
	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * path;              //@synthesize path=_path - In the implementation block
+(id)operationWithPath:(id)arg1 type:(id)arg2 image:(id)arg3 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)path;
-(UIImage *)image;
-(void)setPath:(NSString *)arg1 ;
-(void)main;
@end
