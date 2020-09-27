/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <TVMLKit/TVJSSlideshow.h>

@protocol TVJSSlideshow <JSExport>
@required
-(void)dismiss;
-(void)append:(id)arg1;
-(void)start:(id)arg1 :(id)arg2 :(id)arg3;

@end


@interface TVJSSlideshow : IKJSObject <TVJSSlideshow>
-(void)dismiss;
-(void)append:(id)arg1 ;
-(id)_imageProxiesForImageRequests:(id)arg1 ;
-(id)_imageURLRequestsForImageRequests:(id)arg1 commonHeaders:(id*)arg2 ;
-(id)_imageProxiesForURLImageRequests:(id)arg1 commonHeaders:(id)arg2 ;
-(void)start:(id)arg1 :(id)arg2 :(id)arg3 ;
@end
