/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:23 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <ProVideo/ProVideo-Structs.h>
@interface PMCachedBitmapObject : NSObject {

	shared_ptr<PCBitmap>* _bitmap;

}
-(void)dealloc;
-(shared_ptr<PCBitmap>*)bitmap;
-(id)initWithBitmap:(const shared_ptr<PCBitmap>*)arg1 ;
@end
