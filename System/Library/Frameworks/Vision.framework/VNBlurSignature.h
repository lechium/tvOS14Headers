/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:44 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <Vision/Vision-Structs.h>
@interface VNBlurSignature : NSObject {

	void* _signatureData;

}
+(id)computeBlurSignatureForGrayscaleImage:(CVBufferRef)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)initWithSignatureData:(void*)arg1 ;
-(void)setSignatureData:(void*)arg1 ;
-(void*)getSignatureData;
@end

