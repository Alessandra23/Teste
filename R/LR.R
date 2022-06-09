regLinear <- function(x, y){
  est <- LR(y, x)
  return(est)
}
