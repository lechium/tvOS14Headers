/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface WKEditCommand : NSObject {

	RefPtr<WebKit::WebEditCommandProxy, WTF::DumbPtrTraits<WebKit::WebEditCommandProxy> >* _command;

}
-(WebEditCommandProxy*)command;
-(id)initWithWebEditCommandProxy:(Ref<WebKit::WebEditCommandProxy, WTF::DumbPtrTraits<WebKit::WebEditCommandProxy> >*)arg1 ;
@end
