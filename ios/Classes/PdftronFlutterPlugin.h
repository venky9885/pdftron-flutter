#import <Flutter/Flutter.h>
#import <PDFNet/PDFNet.h>
#import <Tools/Tools.h>

NS_ASSUME_NONNULL_BEGIN

@interface PdftronFlutterPlugin : NSObject<FlutterPlugin, FlutterStreamHandler>

@property (nonatomic, strong) PTTabbedDocumentViewController *tabbedDocumentViewController;

+ (void)configureDocumentViewController:(PTDocumentViewController*)documentViewController withConfig:(NSString*)config;

- (void)importAnnotationCommand:(NSDictionary<NSString *, id> *)arguments;

-(void)saveDocument:(NSDictionary<NSString *, id> *)arguments resultToken:(FlutterResult)result;

- (FlutterError* _Nullable)onListenWithArguments:(id _Nullable)arguments eventSink:(FlutterEventSink)events;
- (FlutterError* _Nullable)onCancelWithArguments:(id _Nullable)arguments;

-(void)docVC:(PTDocumentViewController*)docVC annotationChange:(NSString*)xfdfCommand;
-(void)docVC:(PTDocumentViewController*)docVC bookmarkChange:(NSString*)bookmarkJson;

@end

NS_ASSUME_NONNULL_END
