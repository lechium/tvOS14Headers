/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:25 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol UINamedLayerImage <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) int blendMode; 
@property (assign,nonatomic) BOOL fixedFrame; 
@property (nonatomic,readonly) id<UINamedLayerContentProvider> contentProvider; 
@optional
-(id<UINamedLayerContentProvider>)contentProvider;
-(BOOL)fixedFrame;
-(void)setFixedFrame:(BOOL)arg1;
-(id)imageObj;

@required
-(NSString *)name;
-(CGRect)frame;
-(double)opacity;
-(int)blendMode;

@end
